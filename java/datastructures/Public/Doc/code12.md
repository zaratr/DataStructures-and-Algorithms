<section style="height: auto;">
        <h1 id="code-challenge">Code Challenge</h1>

<p>First-in, First out Animal Shelter.</p>

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

<p><strong>Branch Name:</strong> <code class="language-plaintext highlighter-rouge">stack-queue-animal-shelter</code></p>

<p><strong>Challenge Type:</strong> Code Challenge / Algorithm</p>

<h2 id="feature-tasks">Feature Tasks</h2>

<ul>
  <li>Create a class called AnimalShelter which holds only dogs and cats.</li>
  <li>The shelter operates using a <em>first-in, first-out</em> approach.</li>
  <li>Implement the following methods:
    <ul>
      <li>enqueue
        <ul>
          <li>Arguments: animal
            <ul>
              <li><code class="language-plaintext highlighter-rouge">animal</code> can be either a dog or a cat object.</li>
            </ul>
          </li>
        </ul>
      </li>
      <li>dequeue
        <ul>
          <li>Arguments: pref
            <ul>
              <li><code class="language-plaintext highlighter-rouge">pref</code> can be either <code class="language-plaintext highlighter-rouge">"dog"</code> or <code class="language-plaintext highlighter-rouge">"cat"</code></li>
            </ul>
          </li>
          <li>Return: either a dog or a cat, based on preference.
            <ul>
              <li>If <code class="language-plaintext highlighter-rouge">pref</code> is not <code class="language-plaintext highlighter-rouge">"dog"</code> or <code class="language-plaintext highlighter-rouge">"cat"</code> then return null.</li>
            </ul>
          </li>
        </ul>
      </li>
    </ul>
  </li>
</ul>

<h2 id="stretch-goal">Stretch Goal</h2>

<p>If a cat or dog isn’t preferred, return whichever animal has been waiting in the shelter the longest.</p>

<h2 id="requirements">Requirements</h2>

<p>Ensure your complete solution follows the standard requirements.</p>

<ol>
  <li>Write <a href="../../Challenge_Testing" target="_blank">unit tests</a></li>
  <li>Follow the <a href="../../Challenge_Documentation" target="_blank">template for a well-formatted README</a></li>
  <li>Submit the assignment following <a href="../../Challenge_Submission" target="_blank">these instructions</a></li>
</ol>


      </section>