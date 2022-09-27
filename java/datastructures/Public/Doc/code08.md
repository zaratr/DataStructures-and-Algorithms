<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Zip two linked lists.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">linked-list-zip</code></p>

<p><strong>Challenge Type:</strong> Code Challenge / Algorithm</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Write a function called zip lists</li>
  <li>Arguments: 2 linked lists</li>
  <li>Return: New Linked List, zipped as noted below</li>
  <li>Zip the two linked lists together into one so that the nodes alternate between the two lists and return a reference to the the zipped list.</li>
  <li>Try and keep additional space down to O(1)</li>
  <li>You have access to the Node class and all the properties on the Linked List class as well as the methods created in previous challenges.</li>
</ul>

<h2 id="example">Example</h2>

<h3 id="ziplistslist1-list2"><code class="language-plaintext highlighter-rouge">zipLists(list1, list2)</code></h3>

<table>
  <thead>
    <tr>
      <th>Arg <code class="language-plaintext highlighter-rouge">list1</code></th>
      <th style="text-align: center">Arg <code class="language-plaintext highlighter-rouge">list2</code></th>
      <th>Output</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {3} -&gt; {2} -&gt; null</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">{5} -&gt; {9} -&gt; {4} -&gt; null</code></td>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {5} -&gt; {3} -&gt; {9} -&gt; {2} -&gt; {4} -&gt; null</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {3} -&gt; null</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">{5} -&gt; {9} -&gt; {4} -&gt; null</code></td>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {5} -&gt; {3} -&gt; {9} -&gt; {4} -&gt; null</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {3} -&gt; {2} -&gt; null</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">{5} -&gt; {9} -&gt; null</code></td>
      <td><code class="language-plaintext highlighter-rouge">{1} -&gt; {5} -&gt; {3} -&gt; {9} -&gt; {2} -&gt; null</code></td>
    </tr>
  </tbody>
</table>

<h2 id="unit-tests">Unit Tests</h2>

<p>On this, and all future challenges, write tests for any cases that help you ensure your code is working as expected. Think through different edge cases to determine what tests will ensure your code is covered.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Once you’ve achieved a working solution, implement another function that merges two sorted linked lists into a single sorted linked list.</p>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>


      </section>