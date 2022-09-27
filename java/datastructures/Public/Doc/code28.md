<section style="height: auto;">
        <h1 id="quick-sort">Quick Sort</h1>

<h2 id="assignment">Assignment</h2>

<p>Review the pseudocode below, then trace the algorithm by stepping through the process with the provided sample array. Document your explanation by creating a blog article that shows the step-by-step output after each iteration through some sort of visual.</p>

<p>Once you are done with your article, code a working, tested implementation of Quick Sort based on the pseudocode provided.</p>

<p>You may review an example document <a href="../class-26/solutions/BLOG" target="_blank">HERE</a></p>

<h2 id="pseudo-code">Pseudo Code</h2>

<div class="language-javascript highlighter-rouge"><div class="highlight"><pre class="highlight"><code><span class="nx">ALGORITHM</span> <span class="nx">QuickSort</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">left</span><span class="p">,</span> <span class="nx">right</span><span class="p">)</span>
    <span class="k">if</span> <span class="nx">left</span> <span class="o">&lt;</span> <span class="nx">right</span>
        <span class="c1">// Partition the array by setting the position of the pivot value</span>
        <span class="nx">DEFINE</span> <span class="nx">position</span> <span class="o">&lt;--</span> <span class="nx">Partition</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">left</span><span class="p">,</span> <span class="nx">right</span><span class="p">)</span>
        <span class="c1">// Sort the left</span>
        <span class="nx">QuickSort</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">left</span><span class="p">,</span> <span class="nx">position</span> <span class="o">-</span> <span class="mi">1</span><span class="p">)</span>
        <span class="c1">// Sort the right</span>
        <span class="nx">QuickSort</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">position</span> <span class="o">+</span> <span class="mi">1</span><span class="p">,</span> <span class="nx">right</span><span class="p">)</span>

<span class="nx">ALGORITHM</span> <span class="nx">Partition</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">left</span><span class="p">,</span> <span class="nx">right</span><span class="p">)</span>
    <span class="c1">// set a pivot value as a point of reference</span>
    <span class="nx">DEFINE</span> <span class="nx">pivot</span> <span class="o">&lt;--</span> <span class="nx">arr</span><span class="p">[</span><span class="nx">right</span><span class="p">]</span>
    <span class="c1">// create a variable to track the largest index of numbers lower than the defined pivot</span>
    <span class="nx">DEFINE</span> <span class="nx">low</span> <span class="o">&lt;--</span> <span class="nx">left</span> <span class="o">-</span> <span class="mi">1</span>
    <span class="k">for</span> <span class="nx">i</span> <span class="o">&lt;-</span> <span class="nx">left</span> <span class="nx">to</span> <span class="nx">right</span> <span class="k">do</span>
        <span class="k">if</span> <span class="nx">arr</span><span class="p">[</span><span class="nx">i</span><span class="p">]</span> <span class="o">&lt;=</span> <span class="nx">pivot</span>
            <span class="nx">low</span><span class="o">++</span>
            <span class="nx">Swap</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">i</span><span class="p">,</span> <span class="nx">low</span><span class="p">)</span>

     <span class="c1">// place the value of the pivot location in the middle.</span>
     <span class="c1">// all numbers smaller than the pivot are on the left, larger on the right.</span>
     <span class="nx">Swap</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">right</span><span class="p">,</span> <span class="nx">low</span> <span class="o">+</span> <span class="mi">1</span><span class="p">)</span>
    <span class="c1">// return the pivot index point</span>
     <span class="k">return</span> <span class="nx">low</span> <span class="o">+</span> <span class="mi">1</span>

<span class="nx">ALGORITHM</span> <span class="nx">Swap</span><span class="p">(</span><span class="nx">arr</span><span class="p">,</span> <span class="nx">i</span><span class="p">,</span> <span class="nx">low</span><span class="p">)</span>
    <span class="nx">DEFINE</span> <span class="nx">temp</span><span class="p">;</span>
    <span class="nx">temp</span> <span class="o">&lt;--</span> <span class="nx">arr</span><span class="p">[</span><span class="nx">i</span><span class="p">]</span>
    <span class="nx">arr</span><span class="p">[</span><span class="nx">i</span><span class="p">]</span> <span class="o">&lt;--</span> <span class="nx">arr</span><span class="p">[</span><span class="nx">low</span><span class="p">]</span>
    <span class="nx">arr</span><span class="p">[</span><span class="nx">low</span><span class="p">]</span> <span class="o">&lt;--</span> <span class="nx">temp</span>
</code></pre></div></div>

<h2 id="sample-arrays">Sample Arrays</h2>

<p>In your blog article, visually show the output of processing this input array:</p>

<p><code class="language-plaintext highlighter-rouge">[8,4,23,42,16,15]</code></p>

<p>For your own understanding, consider also stepping through these inputs:</p>

<ul>
  <li>Reverse-sorted: <code class="language-plaintext highlighter-rouge">[20,18,12,8,5,-2]</code></li>
  <li>Few uniques: <code class="language-plaintext highlighter-rouge">[5,12,7,5,5,7]</code></li>
  <li>Nearly-sorted: <code class="language-plaintext highlighter-rouge">[2,3,5,7,13,11]</code></li>
</ul>

<h3 id="implementation">Implementation</h3>

<ul>
  <li>Provide a visual step through for each of the sample arrays based on the provided pseudo code</li>
  <li>Convert the pseudo-code into working code in your language</li>
  <li>Present a complete set of working tests</li>
</ul>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete code solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>

<h2 id="submission">Submission</h2>

<p>Submit a link to a pull request in your <code class="language-plaintext highlighter-rouge">data-structures-and-algorithms</code> repository that contains your completed version of the <code class="language-plaintext highlighter-rouge">sorting/quick/README.md</code> along with your full working, tested code solution.</p>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>Share your article on LinkedIn, so that your network knows how awesome you are.</p>


      </section>