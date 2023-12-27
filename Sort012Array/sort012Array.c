void sort_012_array(int* array, int size){
    int counter_0 = 0;
    int counter_1 = 0;
    int i = 0;
    
    for(i = 0; i < size; i++){
        if(array[i] == 0){
            counter_0++;
        }
        else if(array[i] == 1){
            counter_1++;
        }
    }

    for(i = 0; i < counter_0; i++){
        array[i] = 0;
    }

    for(i = counter_0; i < counter_0 + counter_1; i++){
        array[i] = 1;
    }

    for(i = counter_0 + counter_1; i < size; i++){
        array[i] = 2;
    }
}
