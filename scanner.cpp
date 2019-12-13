#include <iostream>
#include <tuple>
#include <vector>
enum State {START, INT, END, ERROR};
typedef std::tuple<int, std::string, int> Transition;

using std::cout;
using std::endl;
using std::cin;

class StateMachine {
private:
    int currentState;
    int startState;
    int endState;
    int errorState;
    std::vector<Transition> transitions;
public:
    StateMachine(int Start, int End, int Error);
    StateMachine(int Start, int End, const std::vector<Transition> &transitions);
    void set_start(int);
    void set_end(int);
    void set_error(int);
    void set_transitions(const std::vector<Transition> &);
    void add_transition(Transition);

    int feed(char c);
};

int main()
{
    Transition t(START, "abc", END);
    return 0;
}