<section style="height: auto;">
        <h1 id="interview-02">Interview 02</h1>

<p>Determine if a string is full of unique characters</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Act as an interviewer, giving a candidate a code challenge</li>
  <li>Score the candidate according to the <a href="https://docs.google.com/spreadsheets/d/1scthkmARfzAFZrSYAp6LA2coOaoWUWbSzMbtIU4jcHw" target="_blank">Whiteboard Rubric</a></li>
  <li>You are free to offer suggestions or guidance (and see how they respond),  but don’t solve it for the candidate</li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>
<ul>
  <li>Ask the candidate to write a function that will determine if the given string is full of unique characters.</li>
  <li>We can assume that spaces don’t count, and the charactes are not case sensitive (i.e. “A” is the same as “a”).</li>
  <li>The most efficient solution is going to use a Hashmap. The candidate should iterate through the string
and for each of the characters put them in the Hashset, if the value already exists, they can return false as soon as
a duplicate occurs.</li>
  <li>We can assume they have a Hashset readily available (they do not have to implement one)</li>
  <li>This solution is of an O(n) time and O(n) space</li>
</ul>

<h3 id="stretch-goal">Stretch Goal</h3>
<p>If they solve this question too quickly, increase the difficulty by saying that the sentance is case sensitive.
(i.e. “A” and “a” are not the same. )</p>

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
      <td><code class="language-plaintext highlighter-rouge">The quick brown fox jumps over the lazy dog</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">I love cats</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">Donald the duck</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
  </tbody>
</table>

<h2 id="documentation">Documentation</h2>

<p>Record detailed notes on the rubric, to share with the candidate when the interview is complete.</p>


      </section>