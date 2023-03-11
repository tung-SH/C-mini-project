// program to check multiple sound to specify is of a cat or not
// author: Nguyen thanh Tung
// date: 6/3/2023

#include <iostream>
#include <string> 

using namespace std; 

bool is_it_a_cat(int length, string sound); 
void check_multiple_cat_sound(void); 

int main(void) {
    check_multiple_cat_sound(); 

    // prevent terminal close so soon
    string endd; 
    cout << "Ket thuc su dung may tinh, chao N.T Tung (^_-)" << endl; 
    cout << "Hen gap lai ban vao lan sau!"; 
    cin >> endd; 

    return 0; 

}

/* subroutine to check multiple cat sound at a time
1. enter the check times
2. enter each properties of each sound
3. print the result (cat sound or not)
note: able to use and replace
*/ 
void check_multiple_cat_sound(void) {
    // (0)
    struct sound {
        string content; 
        int length; 
    };

    // (1)
    int time; 
    cout << "Please enter the time needed to check the sound: "; cin >> time; 
    sound s[time]; 

    // (2)
    for (int i = 0; i <= time - 1; i++) {
        cout << "Please enter the length of sound " << i + 1 << ": "; cin >> s[i].length;
        cout << "Please enter the content of sound " << i + 1 << ": "; cin >> s[i].content; 
        cout << "-------------------------------------------" << endl;
        cout << "-------------------------------------------" << endl; 
    }

    // (3)
    for (int i = 0; i <= time - 1; i++) {
        if (is_it_a_cat(s[i].length, s[i].content)) {
            cout << "YES, SOUND " << i + 1 << " IS OF A CAT ^_^" << endl; 
        } else {
            cout << "NO, SOUND " << i + 1 << " IS NOT OF A CAT!" << endl; 
        }
    }
}

// subroutine to check if a sound is of a cat or not
// 1. check if the first letter is m or M
// 2. run through the chain (if have) of letter m/M
// 3. check if current letter is e/E
// 4. run through the chain (if have) of letter e/E
// 5,6 same with o/O
// 7,8 same with w/W
// 9 if at the end of the string --> YES, IT IS A CAT.
//  Else --> NO, IT IS NOT A CAT
// NOTE: IDEA IS CHECK ACCORDING TO EACH CHAIN OF m,e,o,w
bool is_it_a_cat(int lengthSound, string sound) {
    bool result;

    int i = 0; 
    // (1)
    if (sound[i] == 'm' || sound[i] == 'M') {
        // (2)
        do {
            i++; 
        } while (sound[i] == 'm' || sound[i] == 'M'); 
        // (3)
        if (sound[i] == 'e' || sound[i] == 'E') {
            // (4)
            do {
                i++; 
            } while (sound[i] == 'e' || sound[i] == 'E'); 
            // (5)
            if (sound[i] = 'o' || sound[i] == 'O') {
                // (6)
                do {
                    i++; 
                } while (sound[i] == 'o' || sound[i] == 'O'); 
                /// (7)
                if (sound[i] = 'w' || sound[i] == 'W') {
                    // (8)
                    do {
                        i++; 
                    } while (sound[i] == 'w' || sound[i] == 'W');
                    // (9)
                    if (i == lengthSound) {
                        result = true; 
                    } else {
                        result = false; 
                    }
                    
                } else {
                    result = false; 
                }
            } else {
                    result = false; 
            }
        } else {
                    result = false; 
                }
    } else {
                    result = false; 
    }

    return result; 
}