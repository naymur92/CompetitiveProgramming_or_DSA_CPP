#include <bits/stdc++.h>

using namespace std;

// configuration for collision resolution algorithm
enum CollisionMethod {CHAINING, LINEAR_PROBING, QUADRATIC_PROBING};
const CollisionMethod COLLISION_RESOLUTION = LINEAR_PROBING;

class HashTable {
private:
	static const int TABLE_SIZE = 10;

	// for chaining
	list<pair<int, string>> chainingTable[TABLE_SIZE];

	// for open addressing
	vector<pair<int, string>> openTable;
	vector<bool> occupied;

	int hashFunction(int key) const {
		return key % TABLE_SIZE;
	}

	int probe(int key, int i) const {
		if (COLLISION_RESOLUTION == LINEAR_PROBING) {
			return (hashFunction(key) + i) % TABLE_SIZE;
		} else if (COLLISION_RESOLUTION == QUADRATIC_PROBING) {
			return (hashFunction(key), i * i) % TABLE_SIZE;
		}

		return -1;
	}

public:
	// constructor
	HashTable() {
		if (COLLISION_RESOLUTION != CHAINING) {
			openTable.resize(TABLE_SIZE, {-1, ""});
			occupied.resize(TABLE_SIZE, false);
		}
	}

	void insert(int key, const string& value) {
		if (COLLISION_RESOLUTION == CHAINING) {
			int index = hashFunction(key);

			for (auto &kv: chainingTable[index]) {
				// replacing old value
				if (kv.first == key) {
					kv.second = value;
					return;
				}
			}
			chainingTable[index].push_back({key, value});
		} else {
			int index;
			for (int i = 0; i < TABLE_SIZE; ++i) {
				index = probe(key, i);
				if (!occupied[index] || openTable[index].first == key) {
					openTable[index] = {key, value};
					occupied[index] = true;
					return;
				}
			}
			cerr << "Hash table is full, couldn't insert key " << key << endl;
		}
	}

	string search(int key) const {
		if (COLLISION_RESOLUTION == CHAINING) {
			int index = hashFunction(key);

			for (auto &kv: chainingTable[index]) {
				if (kv.first == key) return kv.second;
			}
		} else {
			int index;
			for (int i = 0; i < TABLE_SIZE; ++i) {
				index = probe(key, i);
				if (!occupied[index]) break;
				if (openTable[index].first == key) return openTable[index].second;
			}
		}

		return "Not found!";
	}

	void remove(int key) {
		if (COLLISION_RESOLUTION == CHAINING) {
			int index = hashFunction(key);

			chainingTable[index].remove_if([&](const pair<int, string> &kv) {
				return kv.first == key;
			});
		} else {
			int index;
			for (int i = 0; i < TABLE_SIZE; ++i) {
				index = probe(key, i);
				if (!occupied[index]) break;
				if (openTable[index].first == key) {
					occupied[index] = false;
					openTable[index] = {-1, ""};
					return;
				}
			}
		}
	}

	void display() const {
		cout << "----Hash Table----" << endl;

		if (COLLISION_RESOLUTION == CHAINING) {
            for (int i = 0; i < TABLE_SIZE; ++i) {
                cout << "Bucket " << i << ": ";
                for (const auto& kv : chainingTable[i]) {
                    cout << "[" << kv.first << " -> " << kv.second << "] ";
                }
                cout << endl;
            }
        } else {
            for (int i = 0; i < TABLE_SIZE; ++i) {
                cout << "Index " << i << ": ";
                if (occupied[i]) {
                    cout << "[" << openTable[i].first << " -> " << openTable[i].second << "]";
                } else {
                    cout << "Empty";
                }
                cout << endl;
            }
        }
	}
};

int main() {
	HashTable ht;

    ht.insert(1, "One");
    ht.insert(11, "Eleven");
    ht.insert(21, "Twenty-One");

    cout << ht.search(11) << endl;

    ht.remove(11);
    ht.display();
}