#include <iostream>

using namespace std;

int main()
{
    int n, m , rI, rF;
    cin >> n ;
    cin >> m;
    cin >> rI;
    cin >> rF;
    char map[n][m] ;
    for(int i = 0;i< n*m ;i++){
        cin >> map[i/n][i%m] ;
    }
    int min;
    int prints[n];
    for(int j = 0 ;j<m;j++){
        prints[j] = 0;
        for(int i = 0 ; i<n;i++){
            if(map[i][j] = '#')
                prints[j] ++;
        }

    }
    int minimo = 0 ;
    int r = rI;
    bool print = false;
    for(int i = 0;i <m;i++){
        if(prints[i] > m - prints[i] ){
            if(print &&  r < rF){
                r++;
                minimo+= prints[i];
            }else{
                print = true;
                r= rI;
                for( int auxi = 0; auxi<rI ; auxi ++)
                    minimo += prints[ i + auxi]
                i += auxi-1;
            }

        }else{
            if(!print &&  r < rF){
                r++;
                minimo+= m - prints[i];
            }else{
                print = false;
                r= rI;
                for( int auxi = 0; auxi<rI ; auxi ++)
                    minimo += m - prints[ i + auxi]
                i += auxi-1;
            }
        }
    }



    }
}
