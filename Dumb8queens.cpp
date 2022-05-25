#include <iostream>
using namespace std;

int solution = 0;
void print(int arr[]) {
    cout << endl;
  solution++;
    cout << "Solution" << " " << solution <<  endl << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[j] == i) {
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << endl;

    }
    
      return;
}

bool ok(int arr[]) {// moves the c down the array 
    for(int c = 0; c < 8; c++){
   for(int i = 0; i < c; i++){
    if (arr[i] == arr[c] ||  abs(arr[c] - arr[i])==(c - i)) {
                return false;
     }
   }
  }
 return true;
}


void dumb(int q[]){
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                for (int l = 0; l < 8; l++) {
                    for (int m = 0; m < 8; m++) {
                        for (int n = 0; n < 8; n++) {
                            for (int o = 0; o < 8; o++) {
                                for (int p = 0; p < 8; p++) {
                                    q[0] = i;
                                    q[1] = j;
                                    q[2] = k;
                                    q[3] = l;
                                    q[4] = m;
                                    q[5] = n;
                                    q[6] = o;
                                    q[7] = p;
                                    if (ok(q)) {
                                        print(q);
                                    }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    
  return;
}

int main() {
 int b[8] = {0};
 dumb(b);    
 return 0;  
}