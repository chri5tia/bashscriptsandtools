<?php
/**
 * @file
 * fosterclub_glazed_theme.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function fosterclub_glazed_theme_default_rules_configuration() {
  $items = array();
  $items['rules_notify_author_of_comments'] = entity_import('rules_config', '{ "rules_notify_author_of_comments" : {
      "LABEL" : "Notify Author of Comments",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "comment" ],
      "ON" : { "comment_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "comment:node:author:mail" ],
            "subject" : "You have a new comment!",
            "message" : "The user, [comment:name], left a comment on one of your posts at [site:name] on [comment:created].\\r\\nView it here: [comment:url]\\r\\n\\r\\nComment:\\r\\n[comment:body]",
            "language" : [ "" ]
          }
        },
        { "mail" : {
            "to" : "tech@fosterclub.com",
            "subject" : "A new comment has been posted.",
            "message" : "The user, [comment:name], left a comment on one of your posts at [site:name] on [comment:created].\\r\\nView it here: [comment:url]\\r\\n\\r\\nComment:\\r\\n[comment:body]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
