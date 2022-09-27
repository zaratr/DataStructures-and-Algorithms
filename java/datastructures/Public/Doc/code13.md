<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Multi-bracket Validation.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">stack-queue-brackets</code></p>

<p><strong>Challenge Type:</strong> Code Challenge / Algorithm</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Write a function called validate brackets</li>
  <li>Arguments: string</li>
  <li>Return: boolean
    <ul>
      <li>representing whether or not the brackets in the string are balanced</li>
    </ul>
  </li>
</ul>

<p>There are 3 types of brackets:</p>

<ul>
  <li>Round Brackets : <code class="language-plaintext highlighter-rouge">()</code></li>
  <li>Square Brackets : <code class="language-plaintext highlighter-rouge">[]</code></li>
  <li>Curly Brackets : <code class="language-plaintext highlighter-rouge">{}</code></li>
</ul>

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
      <td><code class="language-plaintext highlighter-rouge">{}</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{}(){}</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">()[[Extra Characters]]</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">(){}[[]]</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{}{Code}[Fellows](())</code></td>
      <td><code class="language-plaintext highlighter-rouge">TRUE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[({}]</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">(](</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{(})</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
    </tr>
  </tbody>
</table>

<p>Consider these small examples and why they fail.</p>

<table>
  <thead>
    <tr>
      <th>Input</th>
      <th>Output</th>
      <th>Why</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">{</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
      <td>error unmatched opening <code class="language-plaintext highlighter-rouge">{</code> remaining.</td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">)</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
      <td>error closing <code class="language-plaintext highlighter-rouge">)</code> arrived without corresponding opening.</td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[}</code></td>
      <td><code class="language-plaintext highlighter-rouge">FALSE</code></td>
      <td>error closing <code class="language-plaintext highlighter-rouge">}</code>. Doesn’t match opening <code class="language-plaintext highlighter-rouge">(</code>.</td>
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