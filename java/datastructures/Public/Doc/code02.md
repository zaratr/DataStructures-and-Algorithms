<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>Insert and shift an array in middle at index</p>

<h2 id="specifications">Specifications</h2>

<ul>
  <li>Read all of the following instructions carefully.</li>
  <li>Name things exactly as described.</li>
  <li>Do all your work in a public repository called <code class="language-plaintext highlighter-rouge">data-structures-and-algorithms</code>.</li>
  <li>Create a new branch in your repo called <code class="language-plaintext highlighter-rouge">array-insert-shift</code>.</li>
  <li>Make a directory for this challenge, named according to your language’s conventions, containing a README.md file.</li>
  <li>Update the “Table of Contents” - in the README at the root of the repository - with a link to this challenge’s README file.</li>
  <li><strong>NOTE:</strong> This challenge is <strong>whiteboard only</strong>
    <ul>
      <li>Write out code as part of your whiteboard process, but don’t worry about creating external program files.</li>
      <li>Your final whiteboard should look like <a href="/common_curriculum/data_structures_and_algorithms/Whiteboard_Workflow.html" target="_blank">this example layout</a>.</li>
    </ul>
  </li>
</ul>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Write a function called <code class="language-plaintext highlighter-rouge">insertShiftArray</code> which takes in an array and a value to be added. Without utilizing any of the built-in methods available to your language, return an array with the new value added at the middle index.</li>
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
      <td><code class="language-plaintext highlighter-rouge">[2,4,6,-8], 5</code></td>
      <td><code class="language-plaintext highlighter-rouge">[2,4,5,6,-8]</code></td>
    </tr>
    <tr>
      <td><code class="language-plaintext highlighter-rouge">[42,8,15,23,42], 16</code></td>
      <td><code class="language-plaintext highlighter-rouge">[42,8,15,16,23,42]</code></td>
    </tr>
  </tbody>
</table>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Write a second function that removes an element from the middle index and shifts other elements in the array to fill the new gap.</p>

<h2 id="documentation-challenge-readmemd">Documentation: Challenge README.md</h2>

<div class="language-markdown highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="gh"># Insert to Middle of an Array</span>
<span class="c">&lt;!-- Description of the challenge --&gt;</span>

<span class="gu">## Whiteboard Process</span>
<span class="c">&lt;!-- Embedded whiteboard image --&gt;</span>

<span class="gu">## Approach &amp; Efficiency</span>
<span class="c">&lt;!-- What approach did you take? Discuss Why. What is the Big O space/time for this approach? --&gt;</span>
</code></pre></div></div>

<h2 id="submission-instructions">Submission Instructions</h2>

<ol>
  <li>Capture an image of your completed whiteboard, matching the <a href="/common_curriculum/data_structures_and_algorithms/Whiteboard_Workflow.html" target="_blank">example whiteboard layout</a>.
    <ol>
      <li>Copy your image into your challenge directory in your repo.</li>
      <li>Give the image file the same name as the branch you are working on.</li>
      <li>Embed the image in your Challenge README file.</li>
    </ol>
  </li>
  <li>Create a pull request from your branch to the <code class="language-plaintext highlighter-rouge">main</code> branch. Use the description field to describe the work accomplished.</li>
  <li>Submit your completed work:
    <ol>
      <li>Copy the link to your open pull request and paste it into the assignment submission field.</li>
      <li>Leave a description of how long this assignment took you in the comments box.</li>
      <li>Add any additional comments to your grader about your process or any difficulties you may have had with the assignment.</li>
    </ol>
  </li>
  <li>Merge your branch into <code class="language-plaintext highlighter-rouge">main</code>, and delete your branch (don’t worry, the PR link will still work).</li>
</ol>

<h2 id="rubrics">Rubrics</h2>

<h3 id="whiteboard">Whiteboard</h3>

<table>
  <thead>
    <tr>
      <th style="text-align: center">Points</th>
      <th style="text-align: left">Reasoning</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: center">3</td>
      <td style="text-align: left">Whiteboard exercise completed, recommended process followed, and code appears correct</td>
    </tr>
    <tr>
      <td style="text-align: center">2</td>
      <td style="text-align: left">Whiteboard exercise completed, and recommended process followed</td>
    </tr>
    <tr>
      <td style="text-align: center">1</td>
      <td style="text-align: left">Whiteboard exercise is not complete, or workflow does not follow recommended structure/syntax</td>
    </tr>
    <tr>
      <td style="text-align: center">0</td>
      <td style="text-align: left">Whiteboard exercise is significantly incomplete or not present</td>
    </tr>
  </tbody>
</table>

<h3 id="readme">Readme</h3>

<table>
  <thead>
    <tr>
      <th style="text-align: center">Points</th>
      <th style="text-align: left">Reasoning</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td style="text-align: center">2</td>
      <td style="text-align: left">Readme meets all requirements, and the top-level readme of repository properly links to challenge</td>
    </tr>
    <tr>
      <td style="text-align: center">0</td>
      <td style="text-align: left">Readme not present in repo, incorrectly linked, or does not meet the specified requirements listed in assignment</td>
    </tr>
  </tbody>
</table>


      </section>