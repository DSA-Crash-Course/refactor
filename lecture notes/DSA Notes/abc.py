class UserMainCode(object):
    @classmethod
    def swapMax(arr, target_position,current_position) :
        aux = 0;
        for i in range(current_position, target_position,-1) :
            aux = arr[i - 1];
            arr[i - 1] = arr[i];
            arr[i] = aux;
    def maximizeArray(arr, length, swaps) :
        if (swaps == 0) :
            return;
        for i in range(length) :
            max_index = 0; max = -(9223372036854775807-1);
            if (swaps + i) > length :
                limit = length
            else:
                limit = swaps + i
            for j in range(i, limit + 1) :
                if (arr[j] > max) :
                    max = arr[j];
                    max_index = j;
            swaps -= (max_index - i);
            swapMax(arr, i, max_index);
            if (swaps == 0) :
                break;
    def maximiser(cls,input1,input2):
        a=[]
        for c in input1:
            a.append(int(c))
        maximizeArray(a,len(a),input2)
        ans=""
        for it in a:
            ans=ans+str(it)
        return ans