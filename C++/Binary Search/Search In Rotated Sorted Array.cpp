/// Ques link: https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_630450


int binarySearch(int arr[], int s, int e, int key)
{
    int left=s,mid,right=e;
    while (left <= right)
    {
        int mid = left + ((right - left) / 2);
        if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < key)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return -1;
}

int findPivot(int arr[],int n)
{
    int start=0,end=n-1,mid;
    while(start<end)
    {
        mid=start+((end-start)/2);
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
    }
    return start;
}

int search(int* arr, int n, int key)
{
    int pivot=findPivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1])
    {
        return binarySearch(arr, pivot, n-1, key);
    }
    else
    {
        return binarySearch(arr, 0, pivot, key);
    }
}
