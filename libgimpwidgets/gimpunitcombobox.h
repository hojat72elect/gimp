/* LIBGIMP - The GIMP Library
 * Copyright (C) 1995-1999 Peter Mattis and Spencer Kimball
 *
 * gimpunitcombobox.h
 * Copyright (C) 2004  Sven Neumann <sven@gimp.org>
 *
 * This library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <https://www.gnu.org/licenses/>.
 */

#if !defined (__GIMP_WIDGETS_H_INSIDE__) && !defined (GIMP_WIDGETS_COMPILATION)
#error "Only <libgimpwidgets/gimpwidgets.h> can be included directly."
#endif

#ifndef __GIMP_UNIT_COMBO_BOX_H__
#define __GIMP_UNIT_COMBO_BOX_H__

G_BEGIN_DECLS


#define GIMP_TYPE_UNIT_COMBO_BOX (gimp_unit_combo_box_get_type ())
G_DECLARE_FINAL_TYPE (GimpUnitComboBox, gimp_unit_combo_box, GIMP, UNIT_COMBO_BOX, GtkComboBox)


GtkWidget * gimp_unit_combo_box_new            (void);
GtkWidget * gimp_unit_combo_box_new_with_model (GimpUnitStore    *model);

GimpUnit  * gimp_unit_combo_box_get_active     (GimpUnitComboBox *combo);
void        gimp_unit_combo_box_set_active     (GimpUnitComboBox *combo,
                                                GimpUnit         *unit);


G_END_DECLS

#endif  /* __GIMP_UNIT_COMBO_BOX_H__ */
