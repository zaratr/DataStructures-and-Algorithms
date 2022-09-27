<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>k-th value from the end of a linked list.</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of these instructions carefully.</li>
  <li>Name things exactly as described.</li>
  <li>Do all your work in a your <code class="language-plaintext highlighter-rouge">data-structures-and-algorithms</code> public repository.</li>
  <li>Create a new branch in your repo named as noted below.</li>
  <li>Follow the language-specific instructions for the challenge type listed below.</li>
  <li>Update the “Table of Contents” - in the README at the root of the repository - with a link to this challenge’s README file.</li>
</ul>

<h3 id="challenge-setup--execution">Challenge Setup &amp; Execution</h3>

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">linked-list-kth</code></p>

<p><strong>Challenge Type:</strong> Extending an Implementation</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<p>Write the following method for the Linked List class:</p>

<ul>
  <li>kth from end
    <ul>
      <li>argument: a number, <code class="language-plaintext highlighter-rouge">k</code>, as a parameter.</li>
      <li>Return the node’s value that is <code class="language-plaintext highlighter-rouge">k</code> places from the tail of the linked list.</li>
      <li>You have access to the Node class and all the properties on the Linked List class as well as the methods created in previous challenges.</li>
    </ul>
  </li>
</ul>

<h2 id="example">Example</h2>

<h3 id="llkthfromendk"><code class="language-plaintext highlighter-rouge">ll.kthFromEnd(k)</code></h3>

<table>
  <thead>
    <tr>
      <th>Input <code class="language-plaintext highlighter-rouge">ll</code></th>
      <th style="text-align: center">Arg <code class="language-plaintext highlighter-rouge">k</code></th>
      <th>Output</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {8} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">0</code></td>
      <td><code class="language-plaintext highlighter-rouge">2</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {8} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">2</code></td>
      <td><code class="language-plaintext highlighter-rouge">3</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {8} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">6</code></td>
      <td><code class="language-plaintext highlighter-rouge">Exception</code></td>
    </tr>
  </tbody>
</table>

<h3 id="unit-tests">Unit Tests</h3>

<p>Write tests for the following scenarios, and any other cases that help you ensure your code is working as expected.</p>

<ol>
  <li>Where k is greater than the length of the linked list</li>
  <li>Where k and the length of the list are the same</li>
  <li>Where k is not a positive integer</li>
  <li>Where the linked list is of a size 1</li>
  <li>“Happy Path” where k is not at the end, but somewhere in the middle of the linked list</li>
</ol>

<p>Unit tests <em>must be passing</em> before you submit your final solution code.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Once you’ve achieved a working solution, implement a method that finds the node at the middle of the Linked List.</p>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>


      </section>