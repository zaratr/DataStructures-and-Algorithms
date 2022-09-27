<section style="height: auto;">
        <h1 id="implementation-hash-tables">Implementation: Hash Tables</h1>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">hashtable</code></p>

<p><strong>Challenge Type:</strong> New Implementation</p>

<h2 id="features">Features</h2>

<p>Implement a Hashtable Class with the following methods:</p>

<ul>
  <li>set
    <ul>
      <li>Arguments: key, value</li>
      <li>Returns: nothing</li>
      <li>This method should hash the key, and set the key and value pair in the table, handling collisions as needed.</li>
      <li>Should a given key already exist, replace its value from the <code class="language-plaintext highlighter-rouge">value</code> argument given to this method.</li>
    </ul>
  </li>
  <li>get
    <ul>
      <li>Arguments: key</li>
      <li>Returns: Value associated with that key in the table</li>
    </ul>
  </li>
  <li>has
    <ul>
      <li>Arguments: key</li>
      <li>Returns: Boolean, indicating if the key exists in the table already.</li>
    </ul>
  </li>
  <li>keys
    <ul>
      <li>Returns: Collection of keys</li>
    </ul>
  </li>
  <li>hash
    <ul>
      <li>Arguments: key</li>
      <li>Returns: Index in the collection for that key</li>
    </ul>
  </li>
</ul>

<h2 id="structure-and-testing">Structure and Testing</h2>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>Be sure to follow your language/frameworks standard naming conventions (e.g. <em>C#</em> uses PascalCasing for all method and class names).</p>

<p>Any exceptions or errors that come from your code should be contextual, descriptive, capture-able errors. For example, rather than a default error thrown by your language, your code should raise/throw a custom error that describes what went wrong in calling the methods you wrote for this lab.</p>

<p>Write tests to prove the following functionality:</p>

<ol>
  <li>Setting a key/value to your hashtable results in the value being in the data structure</li>
  <li>Retrieving based on a key returns the value stored</li>
  <li>Successfully returns null for a key that does not exist in the hashtable</li>
  <li>Successfully returns a list of all unique keys that exist in the hashtable</li>
  <li>Successfully handle a collision within the hashtable</li>
  <li>Successfully retrieve a value from a bucket within the hashtable that has a collision</li>
  <li>Successfully hash a key to an in-range value</li>
</ol>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Hashtables</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## API</span>
<span class="c">&lt;!-- Description of each method publicly available in each of your hashtable --&gt;</span>
</code></pre></div></div>

<h2 id="submission-instructions">Submission Instructions</h2>

<ol>
  <li>Create a pull request from your branch to your <code class="language-plaintext highlighter-rouge">main</code> branch</li>
  <li>In your open pull request, leave as a comment <a href="https://github.com/blog/1825-task-lists-in-all-markdown-documents" target="_blank">a checklist</a> of the specifications and tasks above, with the actual steps that you completed checked off</li>
  <li>Submitting your completed work:
    <ol>
      <li>Copy the link to your open pull request and paste it into the corresponding assignment</li>
      <li>Leave a description of how long this assignment took you in the comments box</li>
      <li>Add any additional comments you like about your process or any difficulties you may have had with the assignment</li>
    </ol>
  </li>
  <li>Merge your branch into <code class="language-plaintext highlighter-rouge">main</code>, and delete your branch (don’t worry, the PR link will still work)</li>
</ol>


      </section>