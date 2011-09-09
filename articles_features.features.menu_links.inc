<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function articles_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:recent-articles
  $menu_links['primary-links:recent-articles'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'recent-articles',
    'router_path' => 'recent-articles',
    'link_title' => 'Recent work',
    'options' => array(
      'attributes' => array(
        'title' => 'Recent carpentry work',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Recent work');


  return $menu_links;
}
