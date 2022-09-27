<section style="height: auto;">
        <h1 id="implementation-trees">Implementation: Trees</h1>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">trees</code></p>

<p><strong>Challenge Type:</strong> New Implementation</p>

<h2 id="features">Features</h2>

<h3 id="node">Node</h3>

<ul>
  <li>Create a Node class that has properties for the value stored in the node, the left child node, and the right child node.</li>
</ul>

<h3 id="binary-tree">Binary Tree</h3>

<ul>
  <li>Create a Binary Tree class
    <ul>
      <li>Define a method for each of the depth first traversals:
        <ul>
          <li>pre order</li>
          <li>in order</li>
          <li>post order
 which returns an array of the values, ordered appropriately.</li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<h3 id="binary-search-tree">Binary Search Tree</h3>

<ul>
  <li>Create a Binary Search Tree class
    <ul>
      <li>This class should be a sub-class (or your languages equivalent) of the Binary Tree Class, with the following additional methods:</li>
      <li>Add
        <ul>
          <li>Arguments: value</li>
          <li>Return: nothing</li>
          <li>Adds a new node with that value in the correct location in the binary search tree.</li>
        </ul>
      </li>
      <li>Contains
        <ul>
          <li>Argument: value</li>
          <li>Returns: boolean indicating whether or not the value is in the tree at least once.</li>
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
  <li>Can successfully instantiate an empty tree</li>
  <li>Can successfully instantiate a tree with a single root node</li>
  <li>For a Binary Search Tree, can successfully add a left child and right child properly to a node</li>
  <li>Can successfully return a collection from a preorder traversal</li>
  <li>Can successfully return a collection from an inorder traversal</li>
  <li>Can successfully return a collection from a postorder traversal</li>
  <li>
    <table>
      <tbody>
        <tr>
          <td>Returns true</td>
          <td>false for the <code class="language-plaintext highlighter-rouge">contains</code> method, given an existing or non-existing node value</td>
        </tr>
      </tbody>
    </table>
  </li>
</ol>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Create a new branch called <code class="language-plaintext highlighter-rouge">k-ary-tree</code>, and, using the resources available to you online, implement a k-ary tree, where each node can have any number of children.</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Trees</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## API</span>
<span class="c">&lt;!-- Description of each method publicly available in each of your trees --&gt;</span>
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