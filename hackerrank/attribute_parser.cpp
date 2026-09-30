#include <iostream>
#include <string>

using namespace std;

int main() {

    int N, Q;
    cin >> N >> Q;
    cin.ignore();

    string path[100];
    string keys[1000];
    string values[1000];

    int depth = 0;
    int count = 0;

    for (int i = 0; i < N; i++) {

        string line;
        getline(cin, line);

        // Opening tag
        if (line[1] != '/') {

            int space = line.find(' ');

            string tag;

            if (space == -1) {
                tag = line.substr(1, line.length() - 2);
            }
            else {
                tag = line.substr(1, space - 1);
            }

            path[depth] = tag;

            string fullPath = "";

            for (int j = 0; j <= depth; j++) {

                if (j > 0) {
                    fullPath += ".";
                }

                fullPath += path[j];
            }

            // Read attributes
            int pos = space;

            while (pos != -1 && pos < line.length()) {

                // Skip spaces
                while (pos < line.length() && line[pos] == ' ') {
                    pos++;
                }

                // End of tag
                if (pos >= line.length() || line[pos] == '>') {
                    break;
                }

                // Read attribute name
                int start = pos;

                while (pos < line.length() && line[pos] != ' ') {
                    pos++;
                }

                string attribute = line.substr(start, pos - start);

                // Find first "
                while (pos < line.length() && line[pos] != '"') {
                    pos++;
                }

                pos++;

                // Read value
                start = pos;

                while (pos < line.length() && line[pos] != '"') {
                    pos++;
                }

                string value = line.substr(start, pos - start);

                keys[count] = fullPath + "~" + attribute;
                values[count] = value;

                count++;

                pos++;
            }

            depth++;
        }

        // Closing tag
        else {
            depth--;
        }
    }

    // Queries
    for (int i = 0; i < Q; i++) {

        string query;
        cin >> query;

        bool found = false;

        for (int j = 0; j < count; j++) {

            if (keys[j] == query) {

                cout << values[j] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}