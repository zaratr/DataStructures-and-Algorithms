<section style="height: auto;">
        <h1 id="implementation-singly-linked-lists">Implementation: Singly Linked Lists</h1>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">linked-list</code></p>

<p><strong>Challenge Type:</strong> New Implementation</p>

<h2 id="features">Features</h2>

<h3 id="node">Node</h3>

<ul>
  <li>Create a Node class that has properties for the value stored in the Node, and a pointer to the next Node.</li>
</ul>

<h3 id="linked-list">Linked List</h3>

<ul>
  <li>Create a Linked List class</li>
  <li>Within your Linked List class, include a head property.
    <ul>
      <li>Upon instantiation, an empty Linked List should be created.</li>
    </ul>
  </li>
  <li>The class should contain the following methods
    <ul>
      <li>insert
        <ul>
          <li>Arguments: value</li>
          <li>Returns: nothing</li>
          <li>Adds a new node with that value to the <code class="language-plaintext highlighter-rouge">head</code> of the list with an O(1) Time performance.</li>
        </ul>
      </li>
      <li>includes
        <ul>
          <li>Arguments: value</li>
          <li>Returns: Boolean
            <ul>
              <li>Indicates whether that value exists as a Node’s value somewhere within the list.</li>
            </ul>
          </li>
        </ul>
      </li>
      <li>to string
        <ul>
          <li>Arguments: none</li>
          <li>Returns: a string representing all the values in the Linked List, formatted as:</li>
          <li><code class="language-plaintext highlighter-rouge">"{ a } -&gt; { b } -&gt; { c } -&gt; NULL"</code></li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<h2 id="structure-and-testing">Structure and Testing</h2>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>Be sure to follow your language/frameworks standard naming conventions (e.g. <em>C#</em> uses PascalCasing for all method and class names).</p>

<p>Any exceptions or errors that come from your code should be contextual, descriptive, capture-able errors. For example, rather than a default error thrown by your language, your code should raise/throw a custom error that describes what went wrong in calling the methods you wrote for this lab.</p>

<p>Write tests to prove the following functionality:</p>

<ol>
  <li>Can successfully instantiate an empty linked list</li>
  <li>Can properly insert into the linked list</li>
  <li>The head property will properly point to the first node in the linked list</li>
  <li>Can properly insert multiple nodes into the linked list</li>
  <li>Will return true when finding a value within the linked list that exists</li>
  <li>Will return false when searching for a value in the linked list that does not exist</li>
  <li>Can properly return a collection of all the values that exist in the linked list</li>
</ol>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Create a new branch called <code class="language-plaintext highlighter-rouge">doubly-linked-list</code>, and, using the resources available to you online, implement a doubly linked list (completely separate from your singly linked list).</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Singly Linked List</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## API</span>
<span class="c">&lt;!-- Description of each method publicly available to your Linked List --&gt;</span>
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