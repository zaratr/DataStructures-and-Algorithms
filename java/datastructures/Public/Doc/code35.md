<section style="height: auto;">
        <h1 id="implementation-graphs">Implementation: Graphs</h1>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">graph</code></p>

<p><strong>Challenge Type:</strong> New Implementation</p>

<h2 id="features">Features</h2>

<p>Implement your own Graph. The graph should be represented as an adjacency list, and should include the following methods:</p>

<ul>
  <li>add node
    <ul>
      <li>Arguments: value</li>
      <li>Returns: The added node</li>
      <li>Add a node to the graph</li>
    </ul>
  </li>
  <li>add edge
    <ul>
      <li>Arguments: 2 nodes to be connected by the edge, weight (optional)</li>
      <li>Returns: nothing</li>
      <li>Adds a new edge between two nodes in the graph</li>
      <li>If specified, assign a weight to the edge</li>
      <li>Both nodes should already be in the Graph</li>
    </ul>
  </li>
  <li>get nodes
    <ul>
      <li>Arguments: none</li>
      <li>Returns all of the nodes in the graph as a collection (set, list, or similar)</li>
      <li>Empty collection returned if there are no nodes</li>
    </ul>
  </li>
  <li>get neighbors
    <ul>
      <li>Arguments: node</li>
      <li>Returns a collection of edges connected to the given node
        <ul>
          <li>Include the weight of the connection in the returned collection</li>
        </ul>
      </li>
      <li>Empty collection returned if there are no nodes</li>
    </ul>
  </li>
  <li>size
    <ul>
      <li>Arguments: none</li>
      <li>Returns the total number of nodes in the graph</li>
      <li>0 if there are none</li>
    </ul>
  </li>
</ul>

<h2 id="structure-and-testing">Structure and Testing</h2>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>Be sure to follow your language/frameworks standard naming conventions (e.g. <em>C#</em> uses PascalCasing for all method and class names).</p>

<p>Any exceptions or errors that come from your code should be contextual, descriptive, capture-able errors. For example, rather than a default error thrown by your language, your code should raise/throw a custom error that describes what went wrong in calling the methods you wrote for this lab.</p>

<p>Write tests to prove the following functionality:</p>

<ol>
  <li>Node can be successfully added to the graph</li>
  <li>An edge can be successfully added to the graph</li>
  <li>A collection of all nodes can be properly retrieved from the graph</li>
  <li>All appropriate neighbors can be retrieved from the graph</li>
  <li>Neighbors are returned with the weight between nodes included</li>
  <li>The proper size is returned, representing the number of nodes in the graph</li>
  <li>A graph with only one node and edge can be properly returned</li>
</ol>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Graphs</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## API</span>
<span class="c">&lt;!-- Description of each method publicly available in your Graph --&gt;</span>
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