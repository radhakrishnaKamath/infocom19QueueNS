#include <iostream>

enum state  {slice_released, new_slice_request} st;

bool is_slice_release(){
    if(st == 0)
        return true;
    else 
        return false;
}

bool is_new_slice_request(){
    if(st == 1)
        return true;
    else 
        return false;
}



void controller(){
    
    while(true){
        // if()
        if(is_slice_release()){

        }
    }
}

int main(){
    return 0;
}