<section style="height: auto;">
        <h1 id="interview-02">Interview 02</h1>

<p>Validate whether or not a Linked List is palindrome.</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Act as an interviewer, giving a candidate a code challenge</li>
  <li>Score the candidate according to the <a href="https://docs.google.com/spreadsheets/d/1scthkmARfzAFZrSYAp6LA2coOaoWUWbSzMbtIU4jcHw" target="_blank">Whiteboard Rubric</a></li>
  <li>You are free to offer suggestions or guidance (and see how they respond),  but don’t solve it for the candidate</li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Ask the candidate to write a function to validate whether or not a Linked list is palindrome</li>
  <li>Help the candidate understand the definition of a Palindrome if he/she is unsure of it.
    <ul>
      <li>A palindrome is a word, phrase, number, or sequence of nodes which reads the same backward as forward.</li>
    </ul>
  </li>
  <li>Avoid utilizing any of the built-in methods available in your language.</li>
  <li>This problem can be solved using different approaches:
    <ul>
      <li>Using a helper data structure (Array or Linked List) to keep track of the nodes.
        <ul>
          <li>This method takes O(n) and uses O(n) extra space.</li>
        </ul>
      </li>
      <li>Reversing the Linked List, and checking for equality of the reversed part.</li>
    </ul>
  </li>
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
      <td><code class="language-plaintext highlighter-rouge">head-&gt;{t}-&gt;{a}-&gt;{c}-&gt;{o}-&gt;{c}-&gt;{a}-&gt;{t}</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head-&gt;{m}-&gt;{o}-&gt;{o}-&gt;{m}</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head-&gt;{h}-&gt;{o}-&gt;{u}-&gt;{s}-&gt;{e}</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
  </tbody>
</table>

<h2 id="documentation">Documentation</h2>

<p>Record detailed notes on the rubric, to share with the candidate when the interview is complete.</p>


      </section>