<?php
// $Id: twitter-pull-listing.tpl.php,v 1.1.2.5 2011/01/11 02:49:38 inadarei Exp $

/**
 * @file
 * Theme template for a list of tweets.
 *
 * Available variables in the theme include:
 *
 * 1) An array of $tweets, where each tweet object has:
 *   $tweet->id
 *   $tweet->username
 *   $tweet->userphoto
 *   $tweet->text
 *   $tweet->timestamp
 *
 * 2) $twitkey string containing initial keyword.
 *
 * 3) $title
 *
 */
?>
<div class="tweets-pulled-listing">

  <?php if (!empty($title)): ?>
    <h2><?php print $title; ?></h2>
  <?php endif; ?>

  <?php if (is_array($tweets)): ?>
    <?php $tweet_count = count($tweets); ?>

    <?php // from  http://drupal.org/node/1225338 ?>

    <?php $tweet_count = min(count($tweets), 6); ?>
    <ul class="tweets-pulled-list">
        <?php foreach ($tweets as $tweet_key => $tweet):
        if (substr($tweet->text, 0, 1) == '@') { $tweet_count++; continue; }
        if ($tweet_key >= $tweet_count) { break; }
        ?>
        <li>
            <!-- tweet -->
            <div class="tweet-authorphoto"><img src="<?php print $tweet->userphoto; ?>" alt="<?php print $tweet->username; ?>" /></div>
            <span class="tweet-author"><?php print l($tweet->username, 'http://twitter.com/' . $tweet->username); ?></span>
            <span class="tweet-text"><?php print twitter_pull_add_links($tweet->text); ?></span>
            <div class="tweet-time"><?php print l($tweet->time_ago, 'http://twitter.com/' . $tweet->username . '/status/' . $tweet->id);?></div>

            <?php if ($tweet_key < $tweet_count - 1): ?>
            <div class="tweet-divider"></div>
            <?php endif; ?>

        </li>
        <?php endforeach; ?>

    </ul>
  <?php endif; ?>
</div>

