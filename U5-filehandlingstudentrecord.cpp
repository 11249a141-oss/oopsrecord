#include &lt;iostream&gt;
#include &lt;fstream&gt;
#include &lt;string&gt;
using namespace std;
int main() {
// Write sample records
ofstream fout(&quot;students.txt&quot;);
if (!fout) { cerr &lt;&lt; &quot;Cannot create file\n&quot;; return 1; }
fout &lt;&lt; &quot;101 John 85\n&quot;;
fout &lt;&lt; &quot;102 Alice 90\n&quot;;
fout &lt;&lt; &quot;103 Bob 78\n&quot;;

fout.close();
// Read and display
ifstream fin(&quot;students.txt&quot;);
if (!fin) { cerr &lt;&lt; &quot;Cannot open file\n&quot;; return 1; }
cout &lt;&lt; &quot;Roll Name Marks\n&quot;;
int roll, marks;
string name;
while (fin &gt;&gt; roll &gt;&gt; name &gt;&gt; marks) {
cout &lt;&lt; roll &lt;&lt; &quot; &quot; &lt;&lt; name &lt;&lt; &quot; &quot; &lt;&lt; marks &lt;&lt; endl;
}
fin.close();
return 0;
}
