/* 
 * File:   main.cpp
 * Author: ivosh-l
 *
 * Created on 29. prosinec 2011, 11:30
 */

#include <cstdlib>
#include "mix_file.h"
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv) {
    mix_file mix;
    if(argc < 2){
        mix.open("expand37.mix");
        return 0;
    }
    mix.open(argv[1]);
    if(argc < 3){
        
    }
    else{
        if(!strcmp(argv[2],"list")){
            mix.printFileList(0);
        }
        else if(!strcmp(argv[2],"extid")){
            //mix.extractFile();
        }
        else if(!strcmp(argv[2],"extract")){
            if(argc < 4){
                
            }
            else{
                if(!mix.extractFile(argv[3],argv[3])){
                    cout << "File not found in the archive." << endl;
                    return 1;
                }
            }
        }
        else if(!strcmp(argv[2],"getid")){
            if(argc < 4){
                
            }
            else{
                    cout << argv[3] << " : " << hex << mix.get_id(game_ts, argv[3]) << ((mix.checkFileName(argv[3]))? "" : " (NOT PRESENT)") << endl;
            }
        }
    }
    
    
    return 0;
}
