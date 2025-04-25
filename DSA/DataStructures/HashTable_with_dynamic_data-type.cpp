#include <bits/stdc++.h>

using namespace std;

// operator overloading
ostream& operator<<(ostream& os, const pair<int, string>& p) {
    os << "(" << p.first << ", " << p.second << ")";
    return os;
}

template <typename K, typename V>
class HashTable {
private:
	static const int TABLE_SIZE = 10;

	// for chaining
	list<pair<K, V>> chainingTable[TABLE_SIZE];

	int hashFunction(const K &key) const {
		if constexpr (is_same<K, string>::value) {
			long long hash = 0, p = 31, pow = 1;
			for (char c: key) {
				hash = (hash + (c - 'a' + 1) * pow) % TABLE_SIZE;
				pow = (pow * p) % TABLE_SIZE;
			}
			return (int) hash;
		} else if constexpr (is_same<K, char>::value) {
			return key % TABLE_SIZE;
		} else {
			return static_cast<int>(key) % TABLE_SIZE;
		}
	}

public:
	void insert(const K &key, const V &value) {
		int index = hashFunction(key);

		for (auto &kv: chainingTable[index]) {
			// replacing old value
			if (kv.first == key) {
				kv.second = value;
				return;
			}
		}
		chainingTable[index].push_back({key, value});
	}

	V search(const K &key) const {
		int index = hashFunction(key);

		for (auto &kv: chainingTable[index]) {
			if (kv.first == key) return kv.second;
		}

		throw runtime_error("Key not found");
	}

	void remove(const K &key) {
		int index = hashFunction(key);

		chainingTable[index].remove_if([&](const pair<K, V> &kv) {
			return kv.first == key;
		});
	}

	void display() const {
		cout << "----Hash Table----" << endl;

		for (int i = 0; i < TABLE_SIZE; ++i) {
            cout << "Bucket " << i << ": ";
            for (const auto &kv: chainingTable[i]) {
                cout << "[" << kv.first << " -> " << kv.second << "] ";
            }
            cout << endl;
        }
	}
};

int main() {
	HashTable<string, pair<int, string>> ht;
    ht.insert("apple", {1, "red"});
    ht.insert("banana", {2, "yellow"});

    cout << "Value for 'apple': " << ht.search("apple") << endl;

    // ht.remove("banana");
    ht.display();
}