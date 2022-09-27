<section style="height: auto;">
        <h1 id="implementation-stacks-and-queues">Implementation: Stacks and Queues</h1>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">stack-and-queue</code></p>

<p><strong>Challenge Type:</strong> New Implementation</p>

<h2 id="features">Features</h2>

<p>Using a Linked List as the underlying data storage mechanism, implement both a <strong>Stack</strong> and a <strong>Queue</strong></p>

<h3 id="node">Node</h3>

<ul>
  <li>Create a Node class that has properties for the value stored in the Node, and a pointer to the next node.</li>
</ul>

<h3 id="stack">Stack</h3>

<ul>
  <li>Create a Stack class that has a top property. It creates an empty Stack when instantiated.
    <ul>
      <li>This object should be aware of a default empty value assigned to <code class="language-plaintext highlighter-rouge">top</code> when the stack is created.</li>
      <li>The class should contain the following methods:</li>
      <li>push
        <ul>
          <li>Arguments: value</li>
          <li>adds a new node with that value to the <code class="language-plaintext highlighter-rouge">top</code> of the stack with an O(1) Time performance.</li>
        </ul>
      </li>
      <li>pop
        <ul>
          <li>Arguments: none</li>
          <li>Returns: the value from node from the top of the stack</li>
          <li>Removes the node from the top of the stack</li>
          <li>Should raise exception when called on empty stack</li>
        </ul>
      </li>
      <li>peek
        <ul>
          <li>Arguments: none</li>
          <li>Returns: Value of the node located at the top of the stack</li>
          <li>Should raise exception when called on empty stack</li>
        </ul>
      </li>
      <li>is empty
        <ul>
          <li>Arguments: none</li>
          <li>Returns: Boolean indicating whether or not the stack is empty.</li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<h3 id="queue">Queue</h3>

<ul>
  <li>Create a Queue class that has a front property. It creates an empty Queue when instantiated.
    <ul>
      <li>This object should be aware of a default empty value assigned to <code class="language-plaintext highlighter-rouge">front</code> when the queue is created.</li>
      <li>The class should contain the following methods:</li>
      <li>enqueue
        <ul>
          <li>Arguments: value</li>
          <li>adds a new node with that value to the <code class="language-plaintext highlighter-rouge">back</code> of the queue with an O(1) Time performance.</li>
        </ul>
      </li>
      <li>dequeue
        <ul>
          <li>Arguments: none</li>
          <li>Returns: the value from node from the front of the queue</li>
          <li>Removes the node from the front of the queue</li>
          <li>Should raise exception when called on empty queue</li>
        </ul>
      </li>
      <li>peek
        <ul>
          <li>Arguments: none</li>
          <li>Returns: Value of the node located at the front of the queue</li>
          <li>Should raise exception when called on empty stack</li>
        </ul>
      </li>
      <li>is empty
        <ul>
          <li>Arguments: none</li>
          <li>Returns: Boolean indicating whether or not the queue is empty</li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<p>You have access to the Node class and all the properties on the Linked List class.</p>

<h2 id="structure-and-testing">Structure and Testing</h2>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>Be sure to follow your language/frameworks standard naming conventions (e.g. <em>C#</em> uses PascalCasing for all method and class names).</p>

<p>Any exceptions or errors that come from your code should be contextual, descriptive, capture-able errors. For example, rather than a default error thrown by your language, your code should raise/throw a custom error that describes what went wrong in calling the methods you wrote for this lab.</p>

<p>Write tests to prove the following functionality:</p>

<ol>
  <li>Can successfully push onto a stack</li>
  <li>Can successfully push multiple values onto a stack</li>
  <li>Can successfully pop off the stack</li>
  <li>Can successfully empty a stack after multiple pops</li>
  <li>Can successfully peek the next item on the stack</li>
  <li>Can successfully instantiate an empty stack</li>
  <li>Calling pop or peek on empty stack raises exception</li>
  <li>Can successfully enqueue into a queue</li>
  <li>Can successfully enqueue multiple values into a queue</li>
  <li>Can successfully dequeue out of a queue the expected value</li>
  <li>Can successfully peek into a queue, seeing the expected value</li>
  <li>Can successfully empty a queue after multiple dequeues</li>
  <li>Can successfully instantiate an empty queue</li>
  <li>Calling dequeue or peek on empty queue raises exception</li>
</ol>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Stacks and Queues</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## API</span>
<span class="c">&lt;!-- Description of each method publicly available to your Stack and Queue--&gt;</span>
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