<section style="height: auto;">
        <h1 id="interview-02">Interview 02</h1>

<p>Generate the n<sup>th</sup> Fibonacci number, 2 different ways.</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Act as an interviewer, giving a candidate a code challenge</li>
  <li>Score the candidate according to the <a href="https://docs.google.com/spreadsheets/d/1scthkmARfzAFZrSYAp6LA2coOaoWUWbSzMbtIU4jcHw" target="_blank">Whiteboard Rubric</a></li>
  <li>You are free to offer suggestions or guidance (and see how they respond),  but don’t solve it for the candidate</li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>As an interviewer, familiarize yourself with the <a href="https://www.mathsisfun.com/numbers/fibonacci-sequence.html" target="_blank">Fibonacci Sequence</a></li>
  <li>Ask the candidate to write a function to accepts an integer, and returns the n<sup>th</sup>  number in the Fibonacci sequence.</li>
  <li>You should be able to check their work for small values of n: if <code class="language-plaintext highlighter-rouge">fib(n)</code> is equal to <code class="language-plaintext highlighter-rouge">fib(n-1) + fib(n-2)</code>.</li>
  <li>Encourage the candidate to work quickly towards a first solution, that is either recursive or iterative (with a <code class="language-plaintext highlighter-rouge">while</code> or <code class="language-plaintext highlighter-rouge">for</code> loop)</li>
  <li>Then ask the candidate to solve it with the other approach (eg: if they first used an iterative solution, ask for a recursive solution)</li>
  <li>Evaluate and compare the Big-O of both solutions
    <ul>
      <li>The recursive solution might be as bad as O(2<sup>n</sup>)—that’s 2 to the power of <code class="language-plaintext highlighter-rouge">n</code>— which is so bad most laptops would take a while to solve for <code class="language-plaintext highlighter-rouge">n</code> larger than about 40</li>
      <li>The iterative solution should be roughly O(n), which means a laptop could find answers for large values of <code class="language-plaintext highlighter-rouge">n</code></li>
      <li>There is also an O(1) solution, based on a mathematical formula… Not likely anyone will know this without looking it up! (Did you see the formula on the page about the sequence linked above?) If time allows, try to implement the formula with the candidate.</li>
    </ul>
  </li>
  <li>Avoid utilizing any of the built-in methods available to your language.</li>
</ul>

<h2 id="structure">Structure</h2>

<p>Familiarize yourself with the grading rubric, so you know how to score the interview.</p>

<p>Look for effective problem solving, efficient use of time, and effective communication with the whiteboard space available.</p>

<p>Every solution might look a little different, but the candidate should be able to at least convince you that their code works to solve the problem.</p>

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
      <td><code class="language-plaintext highlighter-rouge">0</code></td>
      <td><code class="language-plaintext highlighter-rouge">0</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">1</code></td>
      <td><code class="language-plaintext highlighter-rouge">1</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">2</code></td>
      <td><code class="language-plaintext highlighter-rouge">1</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">3</code></td>
      <td><code class="language-plaintext highlighter-rouge">2</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">4</code></td>
      <td><code class="language-plaintext highlighter-rouge">3</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">5</code></td>
      <td><code class="language-plaintext highlighter-rouge">5</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">6</code></td>
      <td><code class="language-plaintext highlighter-rouge">8</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">7</code></td>
      <td><code class="language-plaintext highlighter-rouge">13</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">8</code></td>
      <td><code class="language-plaintext highlighter-rouge">21</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">14</code></td>
      <td><code class="language-plaintext highlighter-rouge">377</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">45</code></td>
      <td><code class="language-plaintext highlighter-rouge">1134903170</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
      <td><code class="language-plaintext highlighter-rouge">...</code></td>
    </tr>
  </tbody>
</table>

<h2 id="documentation">Documentation</h2>

<p>Record detailed notes on the rubric, to share with the candidate when the interview is complete.</p>


      </section>