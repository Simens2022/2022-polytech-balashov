struct QKey {
    int data;
    QKey *next;
    QKey(int d) {
        data = d;
        next = nullptr;
    }
};

struct Queue {
    QKey *first, *last;
    Queue() { first = last = nullptr; }

    void enqueue(int x) {
        QKey *temp = new QKey(x);

        if (last == nullptr) {
            first = last = temp;
            return;
        }

        last->next = temp;
        last = temp;
    }

    void dequeue() {
        if (first == nullptr) return;
        QKey *temp = first;
        first = first->next;
        if (first == nullptr) last = nullptr;
        delete (temp);
    }
};