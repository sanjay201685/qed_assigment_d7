<table>
<?php 
foreach ($videos_list as $key => $value) { ?>
  <tr>
    <td>
      <div>
        <a href="<?php print drupal_get_path_alias('node/' . $videos_list[$key]->nid); ?>">
        <?php print $videos_list[$key]->title; ?></a>
      </div>
    </td>	
  </tr>
<?php } ?>

</table>