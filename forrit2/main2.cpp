#include <iostream>
#include <string>

using namespace std;

int main() {
    // sjá nánar um string á http://www.cplusplus.com/reference/string/string/ og https://en.cppreference.com/w/cpp/string/basic_string
    string s1 = "Texti";
    string s2("texti");
    // string villa = "Texti" + " og annar Texti";
    string s3 = s1 + " og annar texti";
    s3 += " og enn annar texti";
    s3.append(" og enn annar texti"); // sjá meira um append neðar í skjalinu
    s3.push_back('.'); // push_back getur bara bætt einum staf (char) við strenginn
    
    cin >> s1; // hættir að taka við þegar whitespace er slegið inn
    
    cin.ignore();       // ef cin er notað eins og hér að ofan þarf að setja
    getline(cin, s1);   // cin.ignore() áður en getline er notað
    
    // samanburður, > < >= <= !=
    s1 == s2 ? cout << "eins" : cout << "ekki eins";
    int eins = s1.compare(s2); // compare skilar 0 ef strengirnir eru eins
    s1 = "ABC";
    s2 = "BCD";
    int ekki_eins = s1.compare(s2); // skilar -1 því ABC (s1) er minna en BCD (s2)
    ekki_eins = s2.compare(s1); // skilar þá 1

    // substring(upphafsstak=0, endastak=staðsetning síðasta staksins)
    s1 = "Textinn";
    s2 = s1.substr(); // s2 = "Textinn"
    s2 = s1.substr(3); // s2 = "tinn"
    s2 = s1.substr(3,4); // s2 = ti
    // ATH s1 enn þá "Textinn"

    // compare með innbyggðu substring
    s1 = "ABCDEFG";
    s2 = "DEFGHIJ";
    eins = s1.compare(4,2,s2,1,2); // Ber saman EF úr s1 og EF úr s2 og skilar því 0

    s2 = "CDE";
    eins = s1.compare(2,3,s2); // skilar 0

    // find - skilar staðsetningu í streng
    s1 = "ABCABC";
    int fann = s1.find('C'); // skilar 2
    fann = s1.find("BC"); // skilar 1
    fann = s1.find("BC", 2); // skilar 4
    int fann_ekki = s1.find("G"); // skilar string::npos sem er sama og -1 í int 2's complemet
    // fleiri föll rfind, find_first_of, find_last_of, find_first_not_of og find_last_not_of

    // stærðir length(), max_size() og capacity()
    s1 = "ABCABC";
    int lengd_textanns = s1.length(); // skilar 6
    int fratekid_plass_i_minni = s1.capacity(); // skilar 22, fyllt upp í með \0 eða NULL
    int hamarkslengd = s1.max_size(); // stærsta mögulega stærð á streng

    // append, insert, replace
    s1 = "abcdef";
    s2 = "ABCDEF";
    s1.append(s2); // s1 = "abcdefABCDEF"
    s1.append(s2, 3, 2); // s1 = "abcdefABCDEFDE"
    s1.append(3, 'a'); // s1 = "abcdefABCDEFDEaaa"

    s1 = "ABC";
    s2 = "XYZ";
    s1.insert(0, s2); // s1 = "XYZABC"
    s1.insert(3, "rst"); // s1 = "XYZrstABC"
    s1.insert(3, 4, 'v'); // s1 = "XYZvvvvrstABC"

    s1 = "ABC";
    s2 = "xyz";
    s1.replace(1, 1, s2); // s1 = "AxyzC"
    s1.replace(1, 3, "B"); // s1 = "ABC"
    s1.replace(0, 1, s2, 2, 1); // s1 = "zBC"
    s1.replace(2, 1, 4, '.'); // s1 = "zB...."


    // swap og erase
    s1 = "ABC";
    s2 = "xyz";
    s1.swap(s2); // s1 = "xyz", s2 = "ABC"
    s1.erase(1,1); // s1 = "xz"

    // loopa í gegnum strengi
    s1 = "ABCDEF";
    for(int i = 0; i < s1.length(); i++) {
        s1[i] = s1[i] ^ 32; // eða s1.at(i) = s1.at(i) ^ 32
    } // s1 = "abcdef"

    // loopa með iterator
    s1 = "ABCDEF";
    for(string::iterator it = s1.begin(); it < s1.end(); it++) {
        *it ^= 32;
    } // s1 = "abcdef"

    // meira með iterator
    s1 = "ABC";
    s2 = "xyz";
    s1.replace(s1.begin() + 1, s1.end(), s2.begin() + 1, s2.end()); // s1 = "Ayz"
    // jafngildir: s1.replace(1, 3, s2, 1, 3)


    int leggjaSaman(int a, int b) {
        return a + b;
    }
    
    float leggjaSaman(float a, float b) {
        return a + b;
    }

    double leggjaSaman(double a, double b) {
        return a + b;
    }

    int main () {
        cout << leggjaSaman(10, 20);
        cout << leggjaSaman(12.3, 34.4);
        cout << leggjaSaman(1);
        return 0;
    }

    void nafn() {
        cout << "Geir/n";
    }

    //pass by value

    int haekkaUmEinn(int tala) {
        return ++tala;
    }

    //pass by reference
    void haekkaUmEinnRef(int& tala) {
        tala++;
    }

    int main() {
        int x = 10, y = 20;
        cout << " x = " << x << " og y = " << y << endl;
        swap(x, y);
        cout << " x = " << x << " og y = " << y << endl;
        
        cout << &x << endl;
        cout << haekkaUmEinn(x) << endl; //haekka um einn
        return 0;

    }


    return 0;
}