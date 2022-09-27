<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Implement a simplified LEFT JOIN for 2 Hashmaps.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">hashmap-left-join</code></p>

<p><strong>Challenge Type:</strong> Code Challenge / Algorithm</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<p>Write a function that <a href="https://www.tutorialspoint.com/sql/sql-left-joins.htm" target="_blank">LEFT JOINs</a> two hashmaps into a single data structure.</p>

<ul>
  <li>Write a function called left join</li>
  <li>Arguments: two hash maps
    <ul>
      <li>The first parameter is a hashmap that has word strings as keys, and a synonym of the key as values.</li>
      <li>The second parameter is a hashmap that has word strings as keys, and antonyms of the key as values.</li>
    </ul>
  </li>
  <li>Return: The returned data structure that holds the results is up to you. It doesn’t need to exactly match the output below, so long as it achieves the LEFT JOIN logic</li>
</ul>

<p><strong>NOTES</strong>:</p>

<ul>
  <li>Combine the key and corresponding values (if they exist) into a new data structure according to LEFT JOIN logic.</li>
  <li>LEFT JOIN means all the values in the first hashmap are returned, and if values exist in the “right” hashmap, they are appended to the result row.</li>
  <li>If no values exist in the right hashmap, then some flavor of <code class="language-plaintext highlighter-rouge">NULL</code> should be appended to the result row.</li>
</ul>

<h2 id="structure-and-testing">Structure and Testing</h2>

<p>Utilize the Single-responsibility principle: any methods you write should be clean, reusable, abstract component parts to the whole challenge. You will be given feedback and marked down if you attempt to define a large, complex algorithm in one function definition.</p>

<p>Write at least three test assertions for each method that you define.</p>

<p>Ensure your tests are passing before you submit your solution.</p>

<h2 id="example">Example</h2>

<h3 id="input">INPUT</h3>

<table>
  <thead>
    <tr>
      <th>Synonyms Hash Table</th>
      <th>&nbsp;</th>
      <th>&nbsp;</th>
      <th>Antonyms Hash Table</th>
      <th>&nbsp;</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><strong>Key</strong></td>
      <td><strong>Value</strong></td>
      <td>&nbsp;</td>
      <td><strong>Key</strong></td>
      <td><strong>Value</strong></td>
    </tr>
    <tr>
      <td>diligent</td>
      <td>employed</td>
      <td>&nbsp;</td>
      <td>diligent</td>
      <td>idle</td>
    </tr>
    <tr>
      <td>fond</td>
      <td>enamored</td>
      <td>&nbsp;</td>
      <td>fond</td>
      <td>averse</td>
    </tr>
    <tr>
      <td>guide</td>
      <td>usher</td>
      <td>&nbsp;</td>
      <td>guide</td>
      <td>follow</td>
    </tr>
    <tr>
      <td>outfit</td>
      <td>garb</td>
      <td>&nbsp;</td>
      <td>flow</td>
      <td>jam</td>
    </tr>
    <tr>
      <td>wrath</td>
      <td>anger</td>
      <td>&nbsp;</td>
      <td>wrath</td>
      <td>delight</td>
    </tr>
    <tr>
      <td>…</td>
      <td>…</td>
      <td>&nbsp;</td>
      <td>…</td>
      <td>…</td>
    </tr>
  </tbody>
</table>

<h3 id="output">OUTPUT</h3>

<div class="language-javascript highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="p">[</span>
   <span class="p">[</span><span class="dl">"</span><span class="s2">font</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">enamored</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">averse</span><span class="dl">"</span><span class="p">],</span>
   <span class="p">[</span><span class="dl">"</span><span class="s2">wrath</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">anger</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">delight</span><span class="dl">"</span><span class="p">],</span>
   <span class="p">[</span><span class="dl">"</span><span class="s2">diligent</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">employed</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">idle</span><span class="dl">"</span><span class="p">],</span>
   <span class="p">[</span><span class="dl">"</span><span class="s2">outfit</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">garb</span><span class="dl">"</span><span class="p">,</span> <span class="nx">NULL</span><span class="p">],</span>
   <span class="p">[</span><span class="dl">"</span><span class="s2">guide</span><span class="dl">"</span><span class="p">,</span> <span class="dl">"</span><span class="s2">usher</span><span class="dl">"</span><span class="p">,</span><span class="dl">"</span><span class="s2">follow</span><span class="dl">"</span><span class="p">]</span>
<span class="p">]</span>
</code></pre></div></div>

<h2 id="stretch-goals">Stretch Goals</h2>

<p>Consider a RIGHT JOIN. Can you implement this as a new function? How about by passing an optional parameter to your initial function, to specify if LEFT JOIN or RIGHT JOIN logic should be used?</p>

<h2 id="documentation-your-readmemd">Documentation: Your README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Hashmap LEFT JOIN</span>
<span class="c">&lt;!-- Short summary or background information --&gt;</span>

<span class="gu">## Challenge</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Why? What is the Big O space/time for this approach? --&gt;</span>

<span class="gu">## Solution</span>
<span class="c">&lt;!-- Embedded whiteboard image --&gt;</span>

</code></pre></div></div>

<h2 id="submission-instructions">Submission Instructions</h2>

<ol>
  <li>Take a photo of your completed whiteboard, matching the <a href="/common_curriculum/data_structures_and_algorithms/Whiteboard_Workflow.html" target="_blank">example whiteboard layout</a>
    <ol>
      <li>Copy your photo into an <code class="language-plaintext highlighter-rouge">/assets</code> directory in your repo</li>
      <li>Give the image file the same name as the branch you are working on</li>
      <li>Embed the image in your README.md documentation</li>
    </ol>
  </li>
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