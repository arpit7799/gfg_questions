class myQueue {

    stack<int> input;
    stack<int> output;

  public:

    myQueue() {

    }

    void enqueue(int x) {

        input.push(x);
    }

    void dequeue() {

        if (output.empty()) {

            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        if (!output.empty())
            output.pop();
    }

    int front() {

        if (output.empty()) {

            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }

        if (output.empty())
            return -1;

        return output.top();
    }

    int size() {

        return input.size() + output.size();
    }
};