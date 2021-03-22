#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

template <class T>
void selectionSort(T *arr, int size){
    int pos;

	for(int i = v.size() - 1; i > 0; i--){
        pos = 0;
        for(int j = 1; j <= i; j++){
            if(v[j] > v[pos]){
                pos = j;
            }
        }

        if (pos != i){
            swap(v, i, pos);
        }
    }
}


#endif // SELECTIONSORT_H_INCLUDED
