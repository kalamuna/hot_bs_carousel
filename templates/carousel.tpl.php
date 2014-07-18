<div class="<?php print $classes ?> slide" id="<?php print $variables['id_string']; ?>" data-ride="carousel">
  <?php print theme('carousel_indicators', array(
    'items' => count($slides),
    'target' => $variables['id_string'],
  )); ?>

  <!-- Wrapper for slides -->
  <div class="carousel-inner">
    <?php
      print render($slides);
    ?>
  </div>

  <!-- Controls -->
  <?php print theme('carousel_controls',array('target'=> $variables['id_string'])); ?>
</div>
