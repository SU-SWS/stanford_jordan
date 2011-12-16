<?php

$info = array(
  // Pre-defined color schemes.
 'schemes' => array(
    '#F6F5F2,#827252,#827252,#5ab5ee,#585754' => t('Stanford C1 Maroon (Default)'),
    '#de8291,#c55964,#861509,#f8306a,#585754' => t('Red Carpet'),
    '#d59648,#865518,#572e05,#eb8919,#585754' => t('Caramel Brown'),
    '#cfb377,#90712c,#463406,#e6bd5c,#585754' => t('Earth Brown'),
    '#f7b42b,#8e6130,#ec8c04,#fade42,#585754' => t('Orange Sunset'),
    '#d1bc00,#6c7019,#d5be01,#f0fd58,#585754' => t('Gold Yellow'),
  ),

  // Images to copy over.
  'copy' => array(
    'images/banner.png',
  ),

    // CSS files (excluding @import) to rewrite with new color scheme.
  // NOTE: this is new to Drupal 6.x
  'css' => array(
    'css/style.css',
  ),

  // Gradient definitions.
  'gradient' => array(0, 37, 760, 121),

  // Color areas to fill (x, y, width, height).
  'fill' => array(
    'base' => array(0, 0, 760, 568),
    'link' => array(107, 533, 41, 23),
  ),

  // Coordinates of all the theme slices (x, y, width, height)
  // with their filename as used in the stylesheet.
  'slices' => array(
    'logo.png'                             => array(622, 51, 64, 73),
    'screenshot.png'                       => array(0, 37, 400, 240),
  ),

  // Reference color used for blending. Matches the base.png's colors.
  'blend_target' => '#ffffff',

  // Preview files.
  'preview_image' => 'color/preview.png',
  'preview_css' => 'color/preview.css',

  // Base file for image generation.
  'base_image' => 'color/base.png',
);
