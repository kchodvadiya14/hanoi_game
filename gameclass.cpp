#include <iostream>
using namespace std;

class TowerOfHanoi {
private:
    int numDisks;
    char source, auxiliary, destination;

public:
    TowerOfHanoi(int n, char src, char aux, char dest) : numDisks(n), source(src), auxiliary(aux), destination(dest) {}

    void moveDisk(int disk, char src, char dest) {
        cout << "Move disk " << disk << " from tower " << src << " to tower " << dest << endl;
    }

    void solve() {
        moveDisks(numDisks, source, auxiliary, destination);
    }

    void moveDisks(int n, char src, char aux, char dest) {
        if (n == 1) {
            moveDisk(n, src, dest);
        } else {
            moveDisks(n - 1, src, dest, aux);
            moveDisk(n, src, dest);
            moveDisks(n - 1, aux, src, dest);
        }
    }
};

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    TowerOfHanoi game(numDisks, 'A', 'B', 'C');
    game.solve();

    return 0;
}
