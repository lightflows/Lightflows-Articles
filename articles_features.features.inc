<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function articles_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function articles_features_imagecache_default_presets() {
  $items = array(
    'news_teaser' => array(
      'presetname' => 'news_teaser',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'outside',
            'width' => '180',
            'height' => '120',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '180',
            'height' => '120',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'small_thumbnail' => array(
      'presetname' => 'small_thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'outside',
            'width' => '150',
            'height' => '100',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '130',
            'height' => '100',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function articles_features_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'module' => 'features',
      'description' => t('A <em>article</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>article</em> entry. By default, a <em>article</em> entry is automatically featured on the site\'s initial home page, and provides the ability to article comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
