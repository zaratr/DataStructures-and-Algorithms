<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Extend a Linked List to allow various insertion methods.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">linked-list-insertions</code></p>

<p><strong>Challenge Type:</strong> Extending an Implementation</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<p>Write the following methods for the Linked List class:</p>

<ul>
  <li>append
    <ul>
      <li>arguments: new value</li>
      <li>adds a new node with the given <code class="language-plaintext highlighter-rouge">value</code> to the end of the list</li>
    </ul>
  </li>
  <li>insert before
    <ul>
      <li>arguments: value, new value</li>
      <li>adds a new node with the given new value immediately before the first node that has the value specified</li>
    </ul>
  </li>
  <li>insert after
    <ul>
      <li>arguments: value, new value</li>
      <li>adds a new node with the given new value immediately after the first node that has the value specified</li>
    </ul>
  </li>
</ul>

<h2 id="examples">Examples</h2>

<h3 id="append">Append</h3>

<table>
  <thead>
    <tr>
      <th>Initial List</th>
      <th style="text-align: center">Method Args</th>
      <th>Resulting List</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; {5} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">1</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; X</code></td>
    </tr>
  </tbody>
</table>

<h3 id="insert-before">Insert Before</h3>

<table>
  <thead>
    <tr>
      <th>Initial List</th>
      <th style="text-align: center">Method Args</th>
      <th>Resulting List</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">3, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {5} -&gt; {3} -&gt; {2} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">1, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {5} -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {2} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">2, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {5} -&gt; {2} -&gt; {2} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">4, 5</code></td>
      <td>No change, method exception</td>
    </tr>
  </tbody>
</table>

<h3 id="insert-after">Insert After</h3>

<table>
  <thead>
    <tr>
      <th>Initial List</th>
      <th style="text-align: center">Method Args</th>
      <th>Resulting List</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">3, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {5} -&gt; {2} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">2, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; {5} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {2} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">2, 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {2} -&gt; {5} -&gt; {2} -&gt; X</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">head -&gt; {1} -&gt; {3} -&gt; {2} -&gt; X</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">4, 5</code></td>
      <td>No change, method exception</td>
    </tr>
  </tbody>
</table>

<h2 id="unit-tests">Unit Tests</h2>

<p>For this and all future code challenges, write tests.</p>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>You have access to the Node class and all the properties on the Linked List class.</p>

<p>Write tests to prove the following functionality:</p>

<ol>
  <li>Can successfully add a node to the end of the linked list</li>
  <li>Can successfully add multiple nodes to the end of a linked list</li>
  <li>Can successfully insert a node before a node located i the middle of a linked list</li>
  <li>Can successfully insert a node before the first node of a linked list</li>
  <li>Can successfully insert after a node in the middle of the linked list</li>
  <li>Can successfully insert a node after the last node of the linked list</li>
</ol>

<p>Unit tests <em>must be passing</em> before you submit your final solution code.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Once you’ve achieved a working solution, write an additional method to delete a node with the given value from the linked list.</p>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>


      </section>