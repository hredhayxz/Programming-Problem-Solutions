/// Ques link: https://www.interviewbit.com/problems/allocate-books/


bool isPossible(vector<int>& A, int B, int maxPages)
{
    int students = 1;
    int currentPages = 0;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        if (A[i] > maxPages)
        {
            return false;
        }

        if (currentPages + A[i] > maxPages)
        {
            students++;
            currentPages = A[i];

            if (students > B)
            {
                return false;
            }
        }
        else
        {
            currentPages += A[i];
        }
    }

    return true;
}



int Solution::books(vector<int> &A, int B)
{
    int n = A.size();

    if (n < B)
    {
        return -1;
    }

    int totalPages = 0;
    int maxPages = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        totalPages += A[i];
        maxPages = max(maxPages, A[i]);
    }

    int left = maxPages;
    int right = totalPages;
    int result = INT_MAX;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (isPossible(A, B, mid))
        {
            result = min(result, mid);
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}
