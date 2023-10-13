
string s = "aacb";
sort(s.begin(), s.end());

do {
    cout << s << endl;
} while(next_permutation(s.begin(), s.end()));



for(int i = 0; i < n; i++) {
    v[i] = i + 1;
}

do {
    if(ok(v, sum)) {
        for(int x : v) {
            cout << x << ' ';
        }
    }
} while(next_permutation(s.begin(, s.end())));