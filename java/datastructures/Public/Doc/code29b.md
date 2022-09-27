<section style="height: auto;">
        <h1 id="interview-02">Interview 02</h1>

<p>Implement Quicksort.</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Act as an interviewer, giving a candidate a code challenge.</li>
  <li>Score the candidate according to the <a href="https://docs.google.com/spreadsheets/d/1scthkmARfzAFZrSYAp6LA2coOaoWUWbSzMbtIU4jcHw" target="_blank">Whiteboard Rubric</a>.</li>
  <li>You are free to offer suggestions or guidance (and see how they respond),  but don’t solve it for the candidate.</li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Ask the candidate to write a function to implement a quicksort.</li>
  <li>Avoid utilizing any of the built-in methods available in your language.</li>
  <li>Offer an example input array of positive and negative integers.</li>
  <li>Encourage a recursive solution, for elegance.</li>
  <li>The candidate should have at least 2 functions—traditionally, a <code class="language-plaintext highlighter-rouge">quicksort</code> and a <code class="language-plaintext highlighter-rouge">partition</code> function.</li>
  <li>The candidate should be able to describe the properties of the algorithm they implement:
    <ul>
      <li>Is it in-place?
        <ul>
          <li>Most likley, depends on implementation.</li>
        </ul>
      </li>
      <li>Is it stable?
        <ul>
          <li>Most likley not, depends on implementation.</li>
        </ul>
      </li>
      <li>Is it adaptable?
        <ul>
          <li>Most likley, depends on implementation.</li>
        </ul>
      </li>
      <li>What’s the time and space complexity?
        <ul>
          <li>This is a divide-and-conquer algorithm, so, best case, it takes <code class="language-plaintext highlighter-rouge">O(n log n)</code> time—that’s <code class="language-plaintext highlighter-rouge">n</code> steps to partition the array, <code class="language-plaintext highlighter-rouge">log n</code> times.</li>
          <li>Since at any step in the process, it only swaps elements within the array, it uses <code class="language-plaintext highlighter-rouge">O(1)</code> space.</li>
        </ul>
      </li>
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

<p><img src="/common_curriculum/data_structures_and_algorithms/Code_401/class-29/Quicksort_diagram.png" alt="quicksort example"></p>

<h2 id="documentation">Documentation</h2>

<p>Record detailed notes on the rubric, to share with the candidate when the interview is complete.</p>


      </section>