void biggest_from_array(int* array_1, int* array_2, int size_1, int size_2){
    int i = 0;
    int j = 0;

    for(i = 0, j = size_2 - 1; i < size_1; i++){
        if(array_1[i] < array_2[j]){
            array_1[i] = array_2[j];
            j--;
        }
        else{
            break;
        }
    }
}
