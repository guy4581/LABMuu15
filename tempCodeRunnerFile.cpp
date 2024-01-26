void shuffle(int &a,int &b,int &c,int &d){
	int A[] = {a, b, c, d};
    int n = sizeof(A) / sizeof(A[0]);

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(A[i], A[j]);
    }
	
    a = A[0];
    b = A[1];
    c = A[2];
    d = A[3];

}