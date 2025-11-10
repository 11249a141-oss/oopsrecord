#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;iomanip&gt;
using namespace std;
int main() {
vector&lt;int&gt; marks(5);
cout &lt;&lt; &quot;Enter marks for 5 subjects (0-100):\n&quot;;
for (int i = 0; i &lt; 5; ++i) {
cin &gt;&gt; marks[i];
if (marks[i] &lt; 0) marks[i] = 0;
if (marks[i] &gt; 100) marks[i] = 100;
}
cout &lt;&lt; &quot;\nText Bar Chart (each * = 2 marks)\n\n&quot;;
for (int i = 0; i &lt; 5; ++i) {
cout &lt;&lt; &quot;Sub&quot; &lt;&lt; (i+1) &lt;&lt; &quot; [&quot; &lt;&lt; setw(3) &lt;&lt; marks[i] &lt;&lt; &quot;]: &quot;;

int bars = marks[i] / 2;
for (int j = 0; j &lt; bars; ++j) cout &lt;&lt; &#39;*&#39;;
cout &lt;&lt; &#39;\n&#39;;
}
return 0;
}
