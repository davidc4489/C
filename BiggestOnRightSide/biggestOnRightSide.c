void biggest_on_right_side(int* array, int size){
    int i = 0;
    int max = array[size-1];

    for(i = size - 2; i >= 0; i--){
        int temp = array[i];
       array[i] = max;
       if(temp > max){
        max = temp;
       }
    }

}
