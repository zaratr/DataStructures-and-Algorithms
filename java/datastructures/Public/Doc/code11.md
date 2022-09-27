<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Implement a Queue using two Stacks.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">stack-queue-pseudo</code></p>

<p><strong>Challenge Type:</strong> Code Challenge / Algorithm</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Create a new class called pseudo queue.
    <ul>
      <li>Do not use an existing Queue.</li>
      <li>Instead, this PseudoQueue class will implement our standard queue interface (the two methods listed below),</li>
      <li>Internally, utilize 2 <code class="language-plaintext highlighter-rouge">Stack</code> instances to create and manage the queue</li>
    </ul>
  </li>
  <li>Methods:
    <ul>
      <li>enqueue
        <ul>
          <li>Arguments: value</li>
          <li>Inserts <code class="language-plaintext highlighter-rouge">value</code> into the PseudoQueue, using a <em>first-in, first-out</em> approach.</li>
        </ul>
      </li>
      <li>dequeue
        <ul>
          <li>Arguments: none</li>
          <li>Extracts a value from the PseudoQueue, using a <em>first-in, first-out</em> approach.</li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<blockquote>
  <p><strong>NOTE:</strong> The <code class="language-plaintext highlighter-rouge">Stack</code> instances have only <code class="language-plaintext highlighter-rouge">push</code>, <code class="language-plaintext highlighter-rouge">pop</code>, and <code class="language-plaintext highlighter-rouge">peek</code> methods. You should use your own Stack implementation. Instantiate these Stack objects in your PseudoQueue constructor.</p>
</blockquote>

<h2 id="example">Example</h2>

<h3 id="enqueuevalue"><code class="language-plaintext highlighter-rouge">enqueue(value)</code></h3>

<table>
  <thead>
    <tr>
      <th>Input</th>
      <th style="text-align: center">Args</th>
      <th>Output</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[10]-&gt;[15]-&gt;[20]</code></td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">5</code></td>
      <td><code class="language-plaintext highlighter-rouge">[5]-&gt;[10]-&gt;[15]-&gt;[20]</code></td>
    </tr>
    <tr>
      <td>&nbsp;</td>
      <td style="text-align: center"><code class="language-plaintext highlighter-rouge">5</code></td>
      <td><code class="language-plaintext highlighter-rouge">[5]</code></td>
    </tr>
  </tbody>
</table>

<h3 id="dequeue"><code class="language-plaintext highlighter-rouge">dequeue()</code></h3>

<table>
  <thead>
    <tr>
      <th>Input</th>
      <th>Output</th>
      <th>Internal State</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[5]-&gt;[10]-&gt;[15]-&gt;[20]</code></td>
      <td><code class="language-plaintext highlighter-rouge">20</code></td>
      <td><code class="language-plaintext highlighter-rouge">[5]-&gt;[10]-&gt;[15])</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[5]-&gt;[10]-&gt;[15]</code></td>
      <td><code class="language-plaintext highlighter-rouge">15</code></td>
      <td><code class="language-plaintext highlighter-rouge">[5]-&gt;[10]</code></td>
    </tr>
  </tbody>
</table>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>


      </section>