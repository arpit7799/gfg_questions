class myStack {
    queue<int> q;

  public:

    void push(int x) {

        q.push(x);

        int sz = q.size();

        while (sz > 1) {

            q.push(q.front());
            q.pop();

            sz--;
        }
    }

    void pop() {

        if (!q.empty())
            q.pop();
    }

    int top() {

        if (q.empty())
            return -1;

        return q.front();
    }

    int size() {

        return q.size();
    }
};