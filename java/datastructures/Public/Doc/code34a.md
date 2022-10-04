<section style="height: auto;">
        <h1 id="interview-01">Interview 01</h1>

<p>Determine the most common word in a book.</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Act as an interviewer, giving a candidate a code challenge</li>
  <li>Score the candidate according to the <a href="https://docs.google.com/spreadsheets/d/1scthkmARfzAFZrSYAp6LA2coOaoWUWbSzMbtIU4jcHw" target="_blank">Whiteboard Rubric</a></li>
  <li>You are free to offer suggestions or guidance (and see how they respond),  but don’t solve it for the candidate</li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Ask the candidate to write a function that determines the most common word in a book.</li>
  <li>The most efficient solution to this problem is to use a Hastable.</li>
  <li>Spaces don’t count, and words are not case sensitive (i.e. Cat, CAT, and cat are all the same)</li>
  <li>Don’t concern yourself wth punctuation.</li>
  <li>The function created should take in a string as an argument.</li>
  <li>The best approach to this is to iterate through the string and to keep a “tally” of how many times a word
appears.</li>
  <li>the word should be the “key”, and a counter as the “value”</li>
  <li>The word with the highest counter at the end is the returned word.</li>
  <li>It is possible for the candidate to havea “tempWord” and “tempCounter” that will hold the highest word and count so far. 
This will prevent them from having to iterate thorugh the hashtable once the string is completed.</li>
  <li>Time and Space is O(n).</li>
</ul>

<h3 id="edge-cases">Edge Cases</h3>
<ul>
  <li>It is possible to have words show up the same amount of times as others, In this case, return the first occurance 
(i.e. both “dog” and “cat” show up twice -&gt; return “dog”);</li>
</ul>

<h2 id="structure">Structure</h2>

<p>Familiarize yourself with the grading rubric, so you know how to score the interview.</p>

<p>Look for effective problem solving, efficient use of time, and effective communication with the whiteboard space available.</p>

<p>Every solution might look a little different, but the candidate should be able to test their solution with different inputs to verify correctness.</p>

<p>Assign points for each item on the Rubric, according to how well the candidate executed on that skill.</p>

<p>Add up all the points at the end, and record the total at the bottom of the page.</p>

<h2 id="example">Example</h2>

<table>
  <thead>
    <tr>
      <th>Input</th>
      <th>Output</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">In a galaxy far far away</code></td>
      <td><code class="language-plaintext highlighter-rouge">far</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">Taco cat ate a taco </code></td>
      <td><code class="language-plaintext highlighter-rouge">taco</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">No. Try not. Do or do not. There is no try.</code></td>
      <td><code class="language-plaintext highlighter-rouge">No</code></td>
    </tr>
  </tbody>
</table>

<h2 id="documentation">Documentation</h2>

<p>Record detailed notes on the rubric, to share with the candidate when the interview is complete.</p>


      </section>