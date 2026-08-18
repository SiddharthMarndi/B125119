#include <iostream>
#include <string>
using namespace std;

class Song {
private:
    string songName;
    string artistName;
    double duration;

public:
    Song(string name, string artist, double dur) {
        songName = name;
        artistName = artist;
        duration = dur;
    }

    friend void compareSongs(const Song& s1, const Song& s2);
};

void compareSongs(const Song& s1, const Song& s2) {
    cout << "\nSong Comparison" << endl;
    cout << "Song 1: " << s1.songName << " by " << s1.artistName << " (" << s1.duration << " mins)" << endl;
    cout << "Song 2: " << s2.songName << " by " << s2.artistName << " (" << s2.duration << " mins)" << endl;

    if (s1.duration > s2.duration) {
        cout << "\nResult: \"" << s1.songName << "\" is longer." << endl;
    } else if (s2.duration > s1.duration) {
        cout << "\nResult: \"" << s2.songName << "\" is longer." << endl;
    } else {
        cout << "\nResult: Both songs have the same duration." << endl;
    }
}

int main() {
    string name1, artist1;
    double dur1;

    cout << "Enter Details for Song 1" << endl;
    cout << "Enter Song Name: ";
    getline(cin, name1);
    cout << "Enter Artist Name: ";
    getline(cin, artist1);
    cout << "Enter Duration: ";
    cin >> dur1;
    cin.ignore();

    string name2, artist2;
    double dur2;

    cout << "Enter Details for Song 2" << endl;
    cout << "Enter Song Name: ";
    getline(cin, name2);
    cout << "Enter Artist Name: ";
    getline(cin, artist2);
    cout << "Enter Duration: ";
    cin >> dur2;

    Song song1(name1, artist1, dur1);
    Song song2(name2, artist2, dur2);

    compareSongs(song1, song2);

    return 0;
}